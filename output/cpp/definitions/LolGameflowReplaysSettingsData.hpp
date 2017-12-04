#ifndef SWAGGER_TYPES_LolGameflowReplaysSettingsData_HPP
#define SWAGGER_TYPES_LolGameflowReplaysSettingsData_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameflowReplaysSettingsData {
    // 
    std::string highlights-folder-path;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowReplaysSettingsData& v) {
    j["highlights-folder-path"] = v.highlights-folder-path;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowReplaysSettingsData& v) {
    v.highlights-folder-path = j.at("highlights-folder-path").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowReplaysSettingsData_HPP