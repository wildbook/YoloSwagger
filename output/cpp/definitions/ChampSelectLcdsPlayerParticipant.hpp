#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPlayerParticipant_t {
    std::string summonerName;
    std::string summonerInternalName;
    int32_t pickMode;
    int32_t pickTurn;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerParticipant_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerInternalName"] = v.summonerInternalName;
    j["pickMode"] = v.pickMode;
    j["pickTurn"] = v.pickTurn;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerParticipant_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.pickMode = j.at("pickMode").get<int32_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const ChampSelectLcdsPlayerParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
