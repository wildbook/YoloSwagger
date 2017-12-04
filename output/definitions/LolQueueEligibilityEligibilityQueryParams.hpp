#ifndef SWAGGER_TYPES_LolQueueEligibilityEligibilityQueryParams_HPP
#define SWAGGER_TYPES_LolQueueEligibilityEligibilityQueryParams_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolQueueEligibilityEligibilityQueryParams {
'    // 
    std::vector<int32_t> queueIds;
    // 
    std::vector<uint64_t> summonerIds;
  };

  void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityQueryParams& v) {
    j["queueIds"] = v.queueIds;
    j["summonerIds"] = v.summonerIds;
  }

  void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityQueryParams& v) {
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>;
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityEligibilityQueryParams_HPP
