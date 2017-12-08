#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysSettingsData_t {
    std::string replays-folder-path;
    std::string highlights-folder-path;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysSettingsData_t& v) {
    j["replays-folder-path"] = v.replays-folder-path;
    j["highlights-folder-path"] = v.highlights-folder-path;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysSettingsData_t& v) {
    v.replays-folder-path = j.at("replays-folder-path").get<std::string>();
    v.highlights-folder-path = j.at("highlights-folder-path").get<std::string>();
  }
  inline std::string to_string(const LolReplaysReplaysSettingsData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
