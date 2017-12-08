#pragma once
#include <json.hpp>
#include <optional>
#include "LolSimpleDialogMessagesSimpleMessage.hpp"
namespace leagueapi {
  struct LolSimpleDialogMessagesLoginDataPacket_t {
    std::vector<LolSimpleDialogMessagesSimpleMessage_t> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesLoginDataPacket_t& v) {
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesLoginDataPacket_t& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolSimpleDialogMessagesSimpleMessage_t>>();
  }
  inline std::string to_string(const LolSimpleDialogMessagesLoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
