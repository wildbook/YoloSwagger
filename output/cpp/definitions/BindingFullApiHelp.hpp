#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullEventHelp.hpp"
#include "BindingFullTypeHelp.hpp"
#include "BindingFullFunctionHelp.hpp"
namespace leagueapi {
  // Describes the exposed native API.
  struct BindingFullApiHelp_t {
    std::vector<BindingFullTypeHelp_t> types;
    std::vector<BindingFullFunctionHelp_t> functions;
    std::vector<BindingFullEventHelp_t> events;
  };

  inline void to_json(nlohmann::json& j, const BindingFullApiHelp_t& v) {
    j["types"] = v.types;
    j["functions"] = v.functions;
    j["events"] = v.events;
  }

  inline void from_json(const nlohmann::json& j, BindingFullApiHelp_t& v) {
    v.types = j.at("types").get<std::vector<BindingFullTypeHelp_t>>();
    v.functions = j.at("functions").get<std::vector<BindingFullFunctionHelp_t>>();
    v.events = j.at("events").get<std::vector<BindingFullEventHelp_t>>();
  }
}
