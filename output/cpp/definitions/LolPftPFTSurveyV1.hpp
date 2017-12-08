#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTSurveyV1_t {
    std::string_t url;
    std::string_t caption;
    std::string_t type;
    uint64_t_t id;
    std::string_t title;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyV1_t& v) {
    j["url"] = v.url;
    j["caption"] = v.caption;
    j["type"] = v.type;
    j["id"] = v.id;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyV1_t& v) {
    v.url = j.at("url").get<std::string_t>();
    v.caption = j.at("caption").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.id = j.at("id").get<uint64_t_t>();
    v.title = j.at("title").get<std::string_t>();
  }
  inline std::string to_string(const LolPftPFTSurveyV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
