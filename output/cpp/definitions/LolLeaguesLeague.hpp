#ifndef SWAGGER_TYPES_LolLeaguesLeague_HPP
#define SWAGGER_TYPES_LolLeaguesLeague_HPP
#include <json.hpp>
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueRank.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeague {
    // 
    std::vector<LolLeaguesLeagueDivision> leagues;
    // 
    LolLeaguesLeagueQueueType queueType;
    // 
    std::string name;
    // 
    uint64_t challengerNextPromotionUpdateInMs;
    // 
    LolLeaguesLeagueTier leagueTier;
    // 
    LolLeaguesLeagueRank requesterLeagueRank;
    // 
    std::string leagueName;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeague& v) {
    j["leagues"] = v.leagues;
    j["queueType"] = v.queueType;
    j["name"] = v.name;
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs;
    j["leagueTier"] = v.leagueTier;
    j["requesterLeagueRank"] = v.requesterLeagueRank;
    j["leagueName"] = v.leagueName;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeague& v) {
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision>>;
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>;
    v.name = j.at("name").get<std::string>;
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>;
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier>;
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank>;
    v.leagueName = j.at("leagueName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeague_HPP
