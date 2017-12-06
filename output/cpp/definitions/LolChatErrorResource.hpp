#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatErrorResource_t {
    uint64_t code;
    std::string from;
    uint64_t id;
    std::string message;
    std::string text;
  };

  inline void to_json(nlohmann::json& j, const LolChatErrorResource_t& v) {
    j["code"] = v.code;
    j["from"] = v.from;
    j["id"] = v.id;
    j["message"] = v.message;
    j["text"] = v.text;
  }

  inline void from_json(const nlohmann::json& j, LolChatErrorResource_t& v) {
    v.code = j.at("code").get<uint64_t>();
    v.from = j.at("from").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.message = j.at("message").get<std::string>();
    v.text = j.at("text").get<std::string>();
  }
}
