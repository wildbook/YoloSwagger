#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullEventHelp.hpp"
#include "BindingFullFunctionHelp.hpp"
#include "BindingFullTypeHelp.hpp"
namespace leagueapi {
  // Describes the exposed native API.
  struct BindingFullApiHelp_t {
    std::vector<BindingFullEventHelp_t> events;
    std::vector<BindingFullTypeHelp_t> types;
    std::vector<BindingFullFunctionHelp_t> functions;
  };

  inline void to_json(nlohmann::json& j, const BindingFullApiHelp_t& v) {
    j["events"] = v.events;
    j["types"] = v.types;
    j["functions"] = v.functions;
  }

  inline void from_json(const nlohmann::json& j, BindingFullApiHelp_t& v) {
    v.events = j.at("events").get<std::vector<BindingFullEventHelp_t>>();
    v.types = j.at("types").get<std::vector<BindingFullTypeHelp_t>>();
    v.functions = j.at("functions").get<std::vector<BindingFullFunctionHelp_t>>();
  }
  inline std::string to_string(const BindingFullApiHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
