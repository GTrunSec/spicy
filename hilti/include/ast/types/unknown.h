// Copyright (c) 2020 by the Zeek Project. See LICENSE for details.

#pragma once

#include <hilti/ast/type.h>

namespace hilti {
namespace type {

/** AST node for an unknown place-holder type. */
class Unknown : public TypeBase, public util::type_erasure::trait::Singleton {
public:
    bool operator==(const Unknown& /* other */) const { return true; }

    /** Implements the `Type` interface. */
    auto isEqual(const Type& other) const { return node::isEqual(this, other); }

    /** Implements the `Node` interface. */
    auto properties() const { return node::Properties{}; }

    /**
     * Wrapper around constructor so that we can make it private. Don't use
     * this, use the singleton `type::unknown` instead.
     */
    static Unknown create(Meta m = Meta()) { return Unknown(std::move(m)); }

private:
    Unknown(Meta m = Meta()) : TypeBase(std::move(m)) {}
};

/** Singleton. */
static const Type unknown = Unknown::create(Location("<singleton>"));

} // namespace type

inline const Node& to_node(const type::Unknown& /* t */) {
    static Node unknown = Type(type::unknown);
    return unknown;
}

} // namespace hilti
