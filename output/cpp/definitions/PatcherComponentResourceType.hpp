#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PatcherComponentResourceType_t {
    solution_E = 1,
    project_E = 0,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResourceType_t& v) {
    switch(v) {
      case PatcherComponentResourceType_t::solution_E:
        j = "solution";
      break;
      case PatcherComponentResourceType_t::project_E:
        j = "project";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResourceType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "solution"){
      v = PatcherComponentResourceType_t::solution_E;
      return;
    }
    if(s == "project"){
      v = PatcherComponentResourceType_t::project_E;
      return;
    }
  }
  inline std::string to_string(const PatcherComponentResourceType_t& v) {
    switch(v) {
      case PatcherComponentResourceType_t::solution_E:
        return "solution";
      case PatcherComponentResourceType_t::project_E:
        return "project";
    }
  }

}
