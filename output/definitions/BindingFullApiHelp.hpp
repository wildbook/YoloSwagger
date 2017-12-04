#ifndef SWAGGER_TYPES_BindingFullApiHelp_HPP
#define SWAGGER_TYPES_BindingFullApiHelp_HPP
#include <json.hpp>
#include "BindingFullTypeHelp.hpp"
#include "BindingFullEventHelp.hpp"
#include "BindingFullFunctionHelp.hpp"
namespace leagueapi {
  // Describes the exposed native API.
  struct BindingFullApiHelp {
    // 
    std::vector<BindingFullEventHelp> events;
    // 
    std::vector<BindingFullFunctionHelp> functions;
    // 
    std::vector<BindingFullTypeHelp> types;
  };

  inline void to_json(nlohmann::json& j, const BindingFullApiHelp& v) {
    j["events"] = v.events;
    j["functions"] = v.functions;
    j["types"] = v.types;
  }

  inline void from_json(const nlohmann::json& j, BindingFullApiHelp& v) {
    v.events = j.at("events").get<std::vector<BindingFullEventHelp>>;
    v.functions = j.at("functions").get<std::vector<BindingFullFunctionHelp>>;
    v.types = j.at("types").get<std::vector<BindingFullTypeHelp>>;
  }

}
#endif // SWAGGER_TYPES_BindingFullApiHelp_HPP
