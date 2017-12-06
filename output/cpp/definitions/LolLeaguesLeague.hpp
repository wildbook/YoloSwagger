#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueRank.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace leagueapi {
  struct LolLeaguesLeague_t {
    uint64_t challengerNextPromotionUpdateInMs;
    std::string leagueName;
    LolLeaguesLeagueTier_t leagueTier;
    std::vector<LolLeaguesLeagueDivision_t> leagues;
    std::string name;
    LolLeaguesLeagueQueueType_t queueType;
    LolLeaguesLeagueRank_t requesterLeagueRank;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeague_t& v) {
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs;
    j["leagueName"] = v.leagueName;
    j["leagueTier"] = v.leagueTier;
    j["leagues"] = v.leagues;
    j["name"] = v.name;
    j["queueType"] = v.queueType;
    j["requesterLeagueRank"] = v.requesterLeagueRank;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeague_t& v) {
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier_t>();
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision_t>>();
    v.name = j.at("name").get<std::string>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank_t>();
  }
}
