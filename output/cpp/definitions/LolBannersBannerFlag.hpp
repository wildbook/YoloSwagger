#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolBannersBannerFlag_t {
    std::string level;
    std::string theme;
  };

  inline void to_json(nlohmann::json& j, const LolBannersBannerFlag_t& v) {
    j["level"] = v.level;
    j["theme"] = v.theme;
  }

  inline void from_json(const nlohmann::json& j, LolBannersBannerFlag_t& v) {
    v.level = j.at("level").get<std::string>();
    v.theme = j.at("theme").get<std::string>();
  }
  inline std::string to_string(const LolBannersBannerFlag_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
