#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolBannersClashV2FlagRewardSpec_t {
    std::string_t seasonId;
    std::string_t theme;
    std::string_t level;
  };

  inline void to_json(nlohmann::json& j, const LolBannersClashV2FlagRewardSpec_t& v) {
    j["seasonId"] = v.seasonId;
    j["theme"] = v.theme;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolBannersClashV2FlagRewardSpec_t& v) {
    v.seasonId = j.at("seasonId").get<std::string_t>();
    v.theme = j.at("theme").get<std::string_t>();
    v.level = j.at("level").get<std::string_t>();
  }
  inline std::string to_string(const LolBannersClashV2FlagRewardSpec_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
