#ifndef SWAGGER_TYPES_LolLeaguesLeague_HPP
#define SWAGGER_TYPES_LolLeaguesLeague_HPP
#include <json.hpp>
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueRank.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeague {
    // 
    uint64_t challengerNextPromotionUpdateInMs;
    // 
    std::string leagueName;
    // 
    LolLeaguesLeagueTier leagueTier;
    // 
    std::vector<LolLeaguesLeagueDivision> leagues;
    // 
    std::string name;
    // 
    LolLeaguesLeagueQueueType queueType;
    // 
    LolLeaguesLeagueRank requesterLeagueRank;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeague& v) {
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs;
    j["leagueName"] = v.leagueName;
    j["leagueTier"] = v.leagueTier;
    j["leagues"] = v.leagues;
    j["name"] = v.name;
    j["queueType"] = v.queueType;
    j["requesterLeagueRank"] = v.requesterLeagueRank;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeague& v) {
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>;
    v.leagueName = j.at("leagueName").get<std::string>;
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier>;
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision>>;
    v.name = j.at("name").get<std::string>;
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>;
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeague_HPP
