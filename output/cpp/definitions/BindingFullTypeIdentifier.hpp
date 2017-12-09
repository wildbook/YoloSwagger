#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Describes the type of a value.
  struct BindingFullTypeIdentifier_t {
    std::string type;
    std::string elementType;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeIdentifier_t& v) {
    j["type"] = v.type;
    j["elementType"] = v.elementType;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeIdentifier_t& v) {
    v.type = j.at("type").get<std::string>();
    v.elementType = j.at("elementType").get<std::string>();
  }
  inline std::string to_string(const BindingFullTypeIdentifier_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
