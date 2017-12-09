#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // User Experience Settings Operating System Information
  struct basicOperatingSystemInfo_t {
    std::string edition;
    std::string platform;
    std::string versionMinor;
    std::string versionMajor;
  };

  inline void to_json(nlohmann::json& j, const basicOperatingSystemInfo_t& v) {
    j["edition"] = v.edition;
    j["platform"] = v.platform;
    j["versionMinor"] = v.versionMinor;
    j["versionMajor"] = v.versionMajor;
  }

  inline void from_json(const nlohmann::json& j, basicOperatingSystemInfo_t& v) {
    v.edition = j.at("edition").get<std::string>();
    v.platform = j.at("platform").get<std::string>();
    v.versionMinor = j.at("versionMinor").get<std::string>();
    v.versionMajor = j.at("versionMajor").get<std::string>();
  }
  inline std::string to_string(const basicOperatingSystemInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
