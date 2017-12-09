#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatPlayerStatSummary_t {
    uint64_t maxRating;
    uint64_t rating;
    uint64_t losses;
    uint64_t leaves;
    std::string playerStatSummaryType;
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlayerStatSummary_t& v) {
    j["maxRating"] = v.maxRating;
    j["rating"] = v.rating;
    j["losses"] = v.losses;
    j["leaves"] = v.leaves;
    j["playerStatSummaryType"] = v.playerStatSummaryType;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlayerStatSummary_t& v) {
    v.maxRating = j.at("maxRating").get<uint64_t>();
    v.rating = j.at("rating").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.leaves = j.at("leaves").get<uint64_t>();
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
  }
  inline std::string to_string(const LolChatChatPlayerStatSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
