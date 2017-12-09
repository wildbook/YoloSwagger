#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueRank.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace leagueapi {
  struct LolLeaguesLeague_t {
    LolLeaguesLeagueRank_t requesterLeagueRank;
    uint64_t challengerNextPromotionUpdateInMs;
    LolLeaguesLeagueTier_t leagueTier;
    std::string name;
    std::string leagueName;
    std::vector<LolLeaguesLeagueDivision_t> leagues;
    LolLeaguesLeagueQueueType_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeague_t& v) {
    j["requesterLeagueRank"] = v.requesterLeagueRank;
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs;
    j["leagueTier"] = v.leagueTier;
    j["name"] = v.name;
    j["leagueName"] = v.leagueName;
    j["leagues"] = v.leagues;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeague_t& v) {
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank_t>();
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>();
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier_t>();
    v.name = j.at("name").get<std::string>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision_t>>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
  }
  inline std::string to_string(const LolLeaguesLeague_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
