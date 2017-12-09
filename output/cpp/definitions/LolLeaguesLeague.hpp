#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueRank.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
namespace leagueapi {
  struct LolLeaguesLeague_t {
    LolLeaguesLeagueTier_t leagueTier;
    std::vector<LolLeaguesLeagueDivision_t> leagues;
    std::string leagueName;
    LolLeaguesLeagueQueueType_t queueType;
    std::string name;
    LolLeaguesLeagueRank_t requesterLeagueRank;
    uint64_t challengerNextPromotionUpdateInMs;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeague_t& v) {
    j["leagueTier"] = v.leagueTier;
    j["leagues"] = v.leagues;
    j["leagueName"] = v.leagueName;
    j["queueType"] = v.queueType;
    j["name"] = v.name;
    j["requesterLeagueRank"] = v.requesterLeagueRank;
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeague_t& v) {
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier_t>();
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision_t>>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
    v.name = j.at("name").get<std::string>();
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank_t>();
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>();
  }
  inline std::string to_string(const LolLeaguesLeague_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
