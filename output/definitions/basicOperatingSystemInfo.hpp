#ifndef SWAGGER_TYPES_basicOperatingSystemInfo_HPP
#define SWAGGER_TYPES_basicOperatingSystemInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // User Experience Settings Operating System Information
  struct basicOperatingSystemInfo {
    // 
    std::string edition;
    // 
    std::string platform;
    // 
    std::string versionMajor;
    // 
    std::string versionMinor;
  };

  inline void to_json(nlohmann::json& j, const basicOperatingSystemInfo& v) {
    j["edition"] = v.edition;
    j["platform"] = v.platform;
    j["versionMajor"] = v.versionMajor;
    j["versionMinor"] = v.versionMinor;
  }

  inline void from_json(const nlohmann::json& j, basicOperatingSystemInfo& v) {
    v.edition = j.at("edition").get<std::string>;
    v.platform = j.at("platform").get<std::string>;
    v.versionMajor = j.at("versionMajor").get<std::string>;
    v.versionMinor = j.at("versionMinor").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_basicOperatingSystemInfo_HPP
