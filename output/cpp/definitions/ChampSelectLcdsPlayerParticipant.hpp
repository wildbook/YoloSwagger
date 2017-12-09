#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPlayerParticipant_t {
    int32_t pickMode;
    uint64_t summonerId;
    int32_t pickTurn;
    std::string summonerName;
    std::string summonerInternalName;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerParticipant_t& v) {
    j["pickMode"] = v.pickMode;
    j["summonerId"] = v.summonerId;
    j["pickTurn"] = v.pickTurn;
    j["summonerName"] = v.summonerName;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerParticipant_t& v) {
    v.pickMode = j.at("pickMode").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
  }
  inline std::string to_string(const ChampSelectLcdsPlayerParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
