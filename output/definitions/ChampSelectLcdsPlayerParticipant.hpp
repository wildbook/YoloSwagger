#ifndef SWAGGER_TYPES_ChampSelectLcdsPlayerParticipant_HPP
#define SWAGGER_TYPES_ChampSelectLcdsPlayerParticipant_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ChampSelectLcdsPlayerParticipant {
    // 
    int32_t pickMode;
    // 
    int32_t pickTurn;
    // 
    uint64_t summonerId;
    // 
    std::string summonerInternalName;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerParticipant& v) {
    j["pickMode"] = v.pickMode;
    j["pickTurn"] = v.pickTurn;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerParticipant& v) {
    v.pickMode = j.at("pickMode").get<int32_t>;
    v.pickTurn = j.at("pickTurn").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsPlayerParticipant_HPP
