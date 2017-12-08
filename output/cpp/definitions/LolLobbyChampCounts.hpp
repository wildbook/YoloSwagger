#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyChampCounts_t {
    uint32_t championsOwned;
    uint32_t championsFreeToPlay;
    uint32_t championsRented;
    uint32_t championsFreeToPlayReward;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyChampCounts_t& v) {
    j["championsOwned"] = v.championsOwned;
    j["championsFreeToPlay"] = v.championsFreeToPlay;
    j["championsRented"] = v.championsRented;
    j["championsFreeToPlayReward"] = v.championsFreeToPlayReward;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyChampCounts_t& v) {
    v.championsOwned = j.at("championsOwned").get<uint32_t>();
    v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>();
    v.championsRented = j.at("championsRented").get<uint32_t>();
    v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>();
  }
  inline std::string to_string(const LolLobbyChampCounts_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
