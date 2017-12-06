#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatErrorResource_t {
    std::string message;
    std::string from;
    uint64_t id;
    std::string text;
    uint64_t code;
  };

  inline void to_json(nlohmann::json& j, const LolChatErrorResource_t& v) {
    j["message"] = v.message;
    j["from"] = v.from;
    j["id"] = v.id;
    j["text"] = v.text;
    j["code"] = v.code;
  }

  inline void from_json(const nlohmann::json& j, LolChatErrorResource_t& v) {
    v.message = j.at("message").get<std::string>();
    v.from = j.at("from").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.text = j.at("text").get<std::string>();
    v.code = j.at("code").get<uint64_t>();
  }
}
