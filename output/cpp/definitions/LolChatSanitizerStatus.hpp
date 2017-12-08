#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizerStatus_t {
    std::string_t locale;
    std::string_t platformID;
    bool_t ready;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizerStatus_t& v) {
    j["locale"] = v.locale;
    j["platformID"] = v.platformID;
    j["ready"] = v.ready;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizerStatus_t& v) {
    v.locale = j.at("locale").get<std::string_t>();
    v.platformID = j.at("platformID").get<std::string_t>();
    v.ready = j.at("ready").get<bool_t>();
  }
  inline std::string to_string(const LolChatSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
