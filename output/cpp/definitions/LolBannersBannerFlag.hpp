#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolBannersBannerFlag_t {
    std::string theme;
    std::string level;
  };

  inline void to_json(nlohmann::json& j, const LolBannersBannerFlag_t& v) {
    j["theme"] = v.theme;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolBannersBannerFlag_t& v) {
    v.theme = j.at("theme").get<std::string>();
    v.level = j.at("level").get<std::string>();
  }
}
