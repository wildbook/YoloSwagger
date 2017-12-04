#ifndef SWAGGER_TYPES_SanitizerSanitizerStatus_HPP
#define SWAGGER_TYPES_SanitizerSanitizerStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SanitizerSanitizerStatus {
    // 
    std::string locale;
    // 
    std::string region;
    // 
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    // 
    uint32_t allowedCharsCount;
    // 
    bool ready;
    // 
    uint32_t projectedCharsCount;
    // 
    uint32_t breakingCharsCount;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerStatus& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["ready"] = v.ready;
    j["projectedCharsCount"] = v.projectedCharsCount;
    j["breakingCharsCount"] = v.breakingCharsCount;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerStatus& v) {
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>;
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>;
    v.ready = j.at("ready").get<bool>;
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>;
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_SanitizerSanitizerStatus_HPP
