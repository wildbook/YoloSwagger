#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowReplaysSettingsData_t {
    std::string highlights-folder-path;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowReplaysSettingsData_t& v) {
    j["highlights-folder-path"] = v.highlights-folder-path;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowReplaysSettingsData_t& v) {
    v.highlights-folder-path = j.at("highlights-folder-path").get<std::string>();
  }
  inline std::string to_string(const LolGameflowReplaysSettingsData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
