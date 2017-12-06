#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesSimpleMessage.hpp"
namespace leagueapi {
  struct LolLeaguesLeaguesLoginDataPacket_t {
    std::vector<LolLeaguesSimpleMessage_t> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesLoginDataPacket_t& v) {
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesLoginDataPacket_t& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLeaguesSimpleMessage_t>>();
  }
}
