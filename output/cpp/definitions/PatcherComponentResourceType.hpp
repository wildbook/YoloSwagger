#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PatcherComponentResourceType_t {
    project_E = 0,
    solution_E = 1,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResourceType_t& v) {
    switch(v) {
      case PatcherComponentResourceType_t::project_E:
        j = "project";
      break;
      case PatcherComponentResourceType_t::solution_E:
        j = "solution";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResourceType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "project"){
      v = PatcherComponentResourceType_t::project_E;
      return;
    }
    if(s == "solution"){
      v = PatcherComponentResourceType_t::solution_E;
      return;
    }
  }
}
