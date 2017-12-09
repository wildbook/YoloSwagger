#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // User Experience Settings Operating System Information
  struct basicOperatingSystemInfo_t {
    std::string versionMajor;
    std::string versionMinor;
    std::string edition;
    std::string platform;
  };

  inline void to_json(nlohmann::json& j, const basicOperatingSystemInfo_t& v) {
    j["versionMajor"] = v.versionMajor;
    j["versionMinor"] = v.versionMinor;
    j["edition"] = v.edition;
    j["platform"] = v.platform;
  }

  inline void from_json(const nlohmann::json& j, basicOperatingSystemInfo_t& v) {
    v.versionMajor = j.at("versionMajor").get<std::string>();
    v.versionMinor = j.at("versionMinor").get<std::string>();
    v.edition = j.at("edition").get<std::string>();
    v.platform = j.at("platform").get<std::string>();
  }
  inline std::string to_string(const basicOperatingSystemInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
