#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatErrorResource_t {
    std::string text;
    std::string message;
    uint64_t code;
    std::string from;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatErrorResource_t& v) {
    j["text"] = v.text;
    j["message"] = v.message;
    j["code"] = v.code;
    j["from"] = v.from;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatErrorResource_t& v) {
    v.text = j.at("text").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.code = j.at("code").get<uint64_t>();
    v.from = j.at("from").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolChatErrorResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
