#ifndef SWAGGER_TYPES_LolReplaysReplaysSettingsData_HPP
#define SWAGGER_TYPES_LolReplaysReplaysSettingsData_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolReplaysReplaysSettingsData {
'    // 
    std::string highlights-folder-path;
    // 
    std::string replays-folder-path;
  };

  void to_json(nlohmann::json& j, const LolReplaysReplaysSettingsData& v) {
    j["highlights-folder-path"] = v.highlights-folder-path;
    j["replays-folder-path"] = v.replays-folder-path;
  }

  void from_json(const nlohmann::json& j, LolReplaysReplaysSettingsData& v) {
    v.highlights-folder-path = j.at("highlights-folder-path").get<std::string>;
    v.replays-folder-path = j.at("replays-folder-path").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplaysSettingsData_HPP
