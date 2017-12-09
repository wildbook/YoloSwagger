#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatErrorResource_t {
    std::string from;
    std::string text;
    std::string message;
    uint64_t id;
    uint64_t code;
  };

  inline void to_json(nlohmann::json& j, const LolChatErrorResource_t& v) {
    j["from"] = v.from;
    j["text"] = v.text;
    j["message"] = v.message;
    j["id"] = v.id;
    j["code"] = v.code;
  }

  inline void from_json(const nlohmann::json& j, LolChatErrorResource_t& v) {
    v.from = j.at("from").get<std::string>();
    v.text = j.at("text").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.code = j.at("code").get<uint64_t>();
  }
  inline std::string to_string(const LolChatErrorResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
