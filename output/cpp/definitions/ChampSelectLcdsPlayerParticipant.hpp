#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPlayerParticipant_t {
    int32_t pickMode;
    std::string summonerInternalName;
    int32_t pickTurn;
    std::string summonerName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerParticipant_t& v) {
    j["pickMode"] = v.pickMode;
    j["summonerInternalName"] = v.summonerInternalName;
    j["pickTurn"] = v.pickTurn;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerParticipant_t& v) {
    v.pickMode = j.at("pickMode").get<int32_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const ChampSelectLcdsPlayerParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
