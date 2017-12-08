#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatErrorResource_t {
    uint64_t code;
    uint64_t id;
    std::string text;
    std::string message;
    std::string from;
  };

  inline void to_json(nlohmann::json& j, const LolChatErrorResource_t& v) {
    j["code"] = v.code;
    j["id"] = v.id;
    j["text"] = v.text;
    j["message"] = v.message;
    j["from"] = v.from;
  }

  inline void from_json(const nlohmann::json& j, LolChatErrorResource_t& v) {
    v.code = j.at("code").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
    v.text = j.at("text").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.from = j.at("from").get<std::string>();
  }
  inline std::string to_string(const LolChatErrorResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
