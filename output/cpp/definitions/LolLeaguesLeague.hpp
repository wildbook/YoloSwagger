#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueRank.hpp"
namespace leagueapi {
  struct LolLeaguesLeague_t {
    LolLeaguesLeagueTier_t leagueTier;
    std::string leagueName;
    uint64_t challengerNextPromotionUpdateInMs;
    std::vector<LolLeaguesLeagueDivision_t> leagues;
    std::string name;
    LolLeaguesLeagueQueueType_t queueType;
    LolLeaguesLeagueRank_t requesterLeagueRank;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeague_t& v) {
    j["leagueTier"] = v.leagueTier;
    j["leagueName"] = v.leagueName;
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs;
    j["leagues"] = v.leagues;
    j["name"] = v.name;
    j["queueType"] = v.queueType;
    j["requesterLeagueRank"] = v.requesterLeagueRank;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeague_t& v) {
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>();
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision_t>>();
    v.name = j.at("name").get<std::string>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank_t>();
  }
  inline std::string to_string(const LolLeaguesLeague_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
