#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizerStatus_t {
    bool ready;
    std::string platformID;
    std::string locale;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizerStatus_t& v) {
    j["ready"] = v.ready;
    j["platformID"] = v.platformID;
    j["locale"] = v.locale;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizerStatus_t& v) {
    v.ready = j.at("ready").get<bool>();
    v.platformID = j.at("platformID").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
  }
  inline std::string to_string(const LolChatSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
