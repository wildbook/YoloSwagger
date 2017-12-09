#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolBannersClashV2FlagRewardSpec_t {
    std::string theme;
    std::string level;
    std::string seasonId;
  };

  inline void to_json(nlohmann::json& j, const LolBannersClashV2FlagRewardSpec_t& v) {
    j["theme"] = v.theme;
    j["level"] = v.level;
    j["seasonId"] = v.seasonId;
  }

  inline void from_json(const nlohmann::json& j, LolBannersClashV2FlagRewardSpec_t& v) {
    v.theme = j.at("theme").get<std::string>();
    v.level = j.at("level").get<std::string>();
    v.seasonId = j.at("seasonId").get<std::string>();
  }
  inline std::string to_string(const LolBannersClashV2FlagRewardSpec_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
