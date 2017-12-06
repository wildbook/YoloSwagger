#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatPlayerStatSummary_t {
    uint64_t maxRating;
    uint64_t rating;
    uint64_t wins;
    uint64_t losses;
    std::string playerStatSummaryType;
    uint64_t leaves;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlayerStatSummary_t& v) {
    j["maxRating"] = v.maxRating;
    j["rating"] = v.rating;
    j["wins"] = v.wins;
    j["losses"] = v.losses;
    j["playerStatSummaryType"] = v.playerStatSummaryType;
    j["leaves"] = v.leaves;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlayerStatSummary_t& v) {
    v.maxRating = j.at("maxRating").get<uint64_t>();
    v.rating = j.at("rating").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>();
    v.leaves = j.at("leaves").get<uint64_t>();
  }
}
