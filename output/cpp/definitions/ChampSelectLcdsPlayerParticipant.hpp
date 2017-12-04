#ifndef SWAGGER_TYPES_ChampSelectLcdsPlayerParticipant_HPP
#define SWAGGER_TYPES_ChampSelectLcdsPlayerParticipant_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ChampSelectLcdsPlayerParticipant {
    // 
    int32_t pickMode;
    // 
    std::string summonerInternalName;
    // 
    int32_t pickTurn;
    // 
    std::string summonerName;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerParticipant& v) {
    j["pickMode"] = v.pickMode;
    j["summonerInternalName"] = v.summonerInternalName;
    j["pickTurn"] = v.pickTurn;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerParticipant& v) {
    v.pickMode = j.at("pickMode").get<int32_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.pickTurn = j.at("pickTurn").get<int32_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsPlayerParticipant_HPP
