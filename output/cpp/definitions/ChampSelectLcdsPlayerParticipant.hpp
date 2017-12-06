#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPlayerParticipant_t {
    std::string summonerName;
    uint64_t summonerId;
    int32_t pickTurn;
    int32_t pickMode;
    std::string summonerInternalName;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerParticipant_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["pickTurn"] = v.pickTurn;
    j["pickMode"] = v.pickMode;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerParticipant_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.pickMode = j.at("pickMode").get<int32_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
  }
}
