#ifndef SWAGGER_TYPES_LolReplaysReplaysSettingsData_HPP
#define SWAGGER_TYPES_LolReplaysReplaysSettingsData_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolReplaysReplaysSettingsData {
    // 
    std::string replays-folder-path;
    // 
    std::string highlights-folder-path;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysSettingsData& v) {
    j["replays-folder-path"] = v.replays-folder-path;
    j["highlights-folder-path"] = v.highlights-folder-path;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysSettingsData& v) {
    v.replays-folder-path = j.at("replays-folder-path").get<std::string>;
    v.highlights-folder-path = j.at("highlights-folder-path").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplaysSettingsData_HPP