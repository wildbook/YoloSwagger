#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPlayer_t {
    uint64_t_t summonerId;
    std::string_t summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsPlayer_t& v) {
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsPlayer_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
  }
  inline std::string to_string(const LcdsPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
