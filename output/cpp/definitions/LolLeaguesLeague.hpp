#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueRank.hpp"
namespace leagueapi {
  struct LolLeaguesLeague_t {
    std::vector<LolLeaguesLeagueDivision_t> leagues;
    LolLeaguesLeagueQueueType_t queueType;
    std::string_t name;
    uint64_t_t challengerNextPromotionUpdateInMs;
    LolLeaguesLeagueTier_t leagueTier;
    LolLeaguesLeagueRank_t requesterLeagueRank;
    std::string_t leagueName;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeague_t& v) {
    j["leagues"] = v.leagues;
    j["queueType"] = v.queueType;
    j["name"] = v.name;
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs;
    j["leagueTier"] = v.leagueTier;
    j["requesterLeagueRank"] = v.requesterLeagueRank;
    j["leagueName"] = v.leagueName;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeague_t& v) {
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision_t>>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
    v.name = j.at("name").get<std::string_t>();
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t_t>();
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier_t>();
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank_t>();
    v.leagueName = j.at("leagueName").get<std::string_t>();
  }
  inline std::string to_string(const LolLeaguesLeague_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
