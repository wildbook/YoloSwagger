#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Describes the type of a value.
  struct BindingFullTypeIdentifier_t {
    std::string_t elementType;
    std::string_t type;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeIdentifier_t& v) {
    j["elementType"] = v.elementType;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeIdentifier_t& v) {
    v.elementType = j.at("elementType").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
  }
  inline std::string to_string(const BindingFullTypeIdentifier_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
