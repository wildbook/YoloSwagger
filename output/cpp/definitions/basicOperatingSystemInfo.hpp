#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // User Experience Settings Operating System Information
  struct basicOperatingSystemInfo_t {
    std::string_t edition;
    std::string_t versionMinor;
    std::string_t versionMajor;
    std::string_t platform;
  };

  inline void to_json(nlohmann::json& j, const basicOperatingSystemInfo_t& v) {
    j["edition"] = v.edition;
    j["versionMinor"] = v.versionMinor;
    j["versionMajor"] = v.versionMajor;
    j["platform"] = v.platform;
  }

  inline void from_json(const nlohmann::json& j, basicOperatingSystemInfo_t& v) {
    v.edition = j.at("edition").get<std::string_t>();
    v.versionMinor = j.at("versionMinor").get<std::string_t>();
    v.versionMajor = j.at("versionMajor").get<std::string_t>();
    v.platform = j.at("platform").get<std::string_t>();
  }
  inline std::string to_string(const basicOperatingSystemInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
