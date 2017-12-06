#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPlayerParticipant_t {
    int32_t pickMode;
    int32_t pickTurn;
    uint64_t summonerId;
    std::string summonerInternalName;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerParticipant_t& v) {
    j["pickMode"] = v.pickMode;
    j["pickTurn"] = v.pickTurn;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerParticipant_t& v) {
    v.pickMode = j.at("pickMode").get<int32_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}
