#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizerStatus_t {
    std::string region;
    std::string locale;
    uint32_t allowedCharsCount;
    uint32_t breakingCharsCount;
    bool ready;
    uint32_t projectedCharsCount;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerStatus_t& v) {
    j["region"] = v.region;
    j["locale"] = v.locale;
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["breakingCharsCount"] = v.breakingCharsCount;
    j["ready"] = v.ready;
    j["projectedCharsCount"] = v.projectedCharsCount;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerStatus_t& v) {
    v.region = j.at("region").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>();
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>();
    v.ready = j.at("ready").get<bool>();
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>();
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>();
  }
  inline std::string to_string(const SanitizerSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
