#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueRank.hpp"
namespace leagueapi {
  struct LolLeaguesLeague_t {
    LolLeaguesLeagueTier_t leagueTier;
    LolLeaguesLeagueRank_t requesterLeagueRank;
    std::vector<LolLeaguesLeagueDivision_t> leagues;
    std::string name;
    std::string leagueName;
    uint64_t challengerNextPromotionUpdateInMs;
    LolLeaguesLeagueQueueType_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeague_t& v) {
    j["leagueTier"] = v.leagueTier;
    j["requesterLeagueRank"] = v.requesterLeagueRank;
    j["leagues"] = v.leagues;
    j["name"] = v.name;
    j["leagueName"] = v.leagueName;
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeague_t& v) {
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier_t>();
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank_t>();
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision_t>>();
    v.name = j.at("name").get<std::string>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
  }
}
